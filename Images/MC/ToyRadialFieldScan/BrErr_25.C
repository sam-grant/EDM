void BrErr_25()
{
//=========Macro generated from canvas: c/c
//=========  (Sat Jun 25 13:30:47 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__2 = new TH1D("__2","Number of sub-runs: 25",240,0.4,1.6);
   __2->SetBinContent(197,1);
   __2->SetBinContent(200,1);
   __2->SetBinContent(201,1);
   __2->SetBinContent(203,2);
   __2->SetBinContent(204,5);
   __2->SetBinContent(205,1);
   __2->SetBinContent(206,2);
   __2->SetBinContent(207,4);
   __2->SetBinContent(208,4);
   __2->SetBinContent(209,4);
   __2->SetBinContent(210,5);
   __2->SetBinContent(211,4);
   __2->SetBinContent(212,1);
   __2->SetBinContent(213,5);
   __2->SetBinContent(214,2);
   __2->SetBinContent(215,8);
   __2->SetBinContent(216,10);
   __2->SetBinContent(217,4);
   __2->SetBinContent(218,2);
   __2->SetBinContent(219,6);
   __2->SetBinContent(220,8);
   __2->SetBinContent(221,8);
   __2->SetBinContent(222,9);
   __2->SetBinContent(223,12);
   __2->SetBinContent(224,10);
   __2->SetBinContent(225,22);
   __2->SetBinContent(226,14);
   __2->SetBinContent(227,15);
   __2->SetBinContent(228,19);
   __2->SetBinContent(229,19);
   __2->SetBinContent(230,18);
   __2->SetBinContent(231,16);
   __2->SetBinContent(232,12);
   __2->SetBinContent(233,23);
   __2->SetBinContent(234,19);
   __2->SetBinContent(235,18);
   __2->SetBinContent(236,29);
   __2->SetBinContent(237,27);
   __2->SetBinContent(238,15);
   __2->SetBinContent(239,18);
   __2->SetBinContent(240,20);
   __2->SetBinContent(241,577);
   __2->SetEntries(1000);
   __2->SetStats(0);
   __2->GetXaxis()->SetTitle("Fitted #delta#LTB_{r}^{b}#GT [ppm]");
   __2->GetXaxis()->SetRange(70,241);
   __2->GetXaxis()->CenterTitle(true);
   __2->GetXaxis()->SetLabelFont(42);
   __2->GetXaxis()->SetTitleSize(0.04);
   __2->GetXaxis()->SetTitleOffset(1.1);
   __2->GetXaxis()->SetTitleFont(42);
   __2->GetYaxis()->SetTitle("Trials / 0.005
 ppm");
   __2->GetYaxis()->CenterTitle(true);
   __2->GetYaxis()->SetNdivisions(4000510);
   __2->GetYaxis()->SetLabelFont(42);
   __2->GetYaxis()->SetTitleSize(0.04);
   __2->GetYaxis()->SetTitleOffset(1.1);
   __2->GetYaxis()->SetTitleFont(42);
   __2->GetZaxis()->SetLabelFont(42);
   __2->GetZaxis()->SetTitleOffset(1);
   __2->GetZaxis()->SetTitleFont(42);
   __2->Draw("HIST");
   
   TPaveText *pt = new TPaveText(0,0,0,0,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(23);
   TText *pt_LaTex = pt->AddText("Trials");
   pt_LaTex = pt->AddText("Mean [ppm]");
   pt_LaTex = pt->AddText("RMS [ppm]");
   pt->Draw();
   
   pt = new TPaveText(0,0,0,0,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(23);
   pt_LaTex = pt->AddText("1000");
   pt_LaTex = pt->AddText("1.58
#pm0.001
");
   pt_LaTex = pt->AddText("0.0441
#pm0.001
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
