#pragma once

#include "test-data.hh"

#include <noa/utils/common.hh>

#include <gtest/gtest.h>

using namespace noa::utils;

class DCSData : public ::testing::Environment
{

    inline static TensorOpt kinetic_energies = std::nullopt;
    inline static TensorOpt recoil_energies = std::nullopt;
    inline static TensorOpt pumas_brems = std::nullopt;
    inline static TensorOpt pumas_brems_del = std::nullopt;
    inline static TensorOpt pumas_brems_cel = std::nullopt;
    inline static TensorOpt pumas_pprod = std::nullopt;
    inline static TensorOpt pumas_pprod_del = std::nullopt;
    inline static TensorOpt pumas_pprod_cel = std::nullopt;
    inline static TensorOpt pumas_photo = std::nullopt;
    inline static TensorOpt pumas_photo_del = std::nullopt;
    inline static TensorOpt pumas_photo_cel = std::nullopt;
    inline static TensorOpt pumas_ion = std::nullopt;
    inline static TensorOpt pumas_ion_del = std::nullopt;
    inline static TensorOpt pumas_ion_cel = std::nullopt;
    inline static TensorOpt pumas_screening = std::nullopt;
    inline static TensorOpt pumas_invlambda = std::nullopt;
    inline static TensorOpt pumas_transport = std::nullopt;
    inline static TensorOpt pumas_mu0 = std::nullopt;
    inline static TensorOpt pumas_lb_h = std::nullopt;
    inline static TensorOpt pumas_soft_scatter = std::nullopt;

public:
    static torch::Tensor get_kinetic_energies()
    {
        return lazy_load_or_fail(kinetic_energies, kinetic_energies_pt);
    }

    static torch::Tensor get_recoil_energies()
    {
        return lazy_load_or_fail(recoil_energies, recoil_energies_pt);
    }

    static torch::Tensor get_pumas_brems()
    {
        return lazy_load_or_fail(pumas_brems, pumas_brems_pt);
    }
    static torch::Tensor get_pumas_brems_del()
    {
        return lazy_load_or_fail(pumas_brems_del, pumas_brems_del_pt);
    }
    static torch::Tensor get_pumas_brems_cel()
    {
        return lazy_load_or_fail(pumas_brems_cel, pumas_brems_cel_pt);
    }
    static torch::Tensor get_pumas_pprod()
    {
        return lazy_load_or_fail(pumas_pprod, pumas_pprod_pt);
    }
    static torch::Tensor get_pumas_pprod_del()
    {
        return lazy_load_or_fail(pumas_pprod_del, pumas_pprod_del_pt);
    }
    static torch::Tensor get_pumas_pprod_cel()
    {
        return lazy_load_or_fail(pumas_pprod_cel, pumas_pprod_cel_pt);
    }
    static torch::Tensor get_pumas_photo()
    {
        return lazy_load_or_fail(pumas_photo, pumas_photo_pt);
    }
    static torch::Tensor get_pumas_photo_del()
    {
        return lazy_load_or_fail(pumas_photo_del, pumas_photo_del_pt);
    }
    static torch::Tensor get_pumas_photo_cel()
    {
        return lazy_load_or_fail(pumas_photo_cel, pumas_photo_cel_pt);
    }
    static torch::Tensor get_pumas_ion()
    {
        return lazy_load_or_fail(pumas_ion, pumas_ion_pt);
    }
    static torch::Tensor get_pumas_ion_del()
    {
        return lazy_load_or_fail(pumas_ion_del, pumas_ion_del_pt);
    }
    static torch::Tensor get_pumas_ion_cel()
    {
        return lazy_load_or_fail(pumas_ion_cel, pumas_ion_cel_pt);
    }
    static torch::Tensor get_pumas_screening()
    {
        return lazy_load_or_fail(pumas_screening, pumas_screening_pt);
    }
    static torch::Tensor get_pumas_invlambda()
    {
        return lazy_load_or_fail(pumas_invlambda, pumas_invlambda_pt);
    }
    static torch::Tensor get_pumas_transport()
    {
        return lazy_load_or_fail(pumas_transport, pumas_transport_pt);
    }
    static torch::Tensor get_pumas_mu0()
    {
        return lazy_load_or_fail(pumas_mu0, pumas_mu0_pt);
    }
    static torch::Tensor get_pumas_lb_h()
    {
        return lazy_load_or_fail(pumas_lb_h, pumas_lb_h_pt);
    }
    static torch::Tensor get_pumas_soft_scatter()
    {
        return lazy_load_or_fail(pumas_soft_scatter, pumas_soft_scatter_pt);
    }

    // Initialise
    virtual void SetUp()
    {
        get_kinetic_energies();
        get_recoil_energies();
        get_pumas_brems();
        get_pumas_brems_del();
        get_pumas_brems_cel();
        get_pumas_pprod();
        get_pumas_pprod_del();
        get_pumas_pprod_cel();
        get_pumas_photo();
        get_pumas_photo_del();
        get_pumas_photo_cel();
        get_pumas_ion();
        get_pumas_ion_del();
        get_pumas_ion_cel();
        get_pumas_screening();
        get_pumas_invlambda();
        get_pumas_transport();
        get_pumas_mu0();
        get_pumas_lb_h();
        get_pumas_soft_scatter();
    }
};