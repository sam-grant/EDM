void BrRes_175()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec 20 14:38:55 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__21 = new TH1D("__21","Number of sub-runs: 175",500,-10,10);
   __21->SetBinContent(226,1);
   __21->SetBinContent(233,2);
   __21->SetBinContent(234,1);
   __21->SetBinContent(235,5);
   __21->SetBinContent(236,5);
   __21->SetBinContent(237,6);
   __21->SetBinContent(238,4);
   __21->SetBinContent(239,14);
   __21->SetBinContent(240,17);
   __21->SetBinContent(241,20);
   __21->SetBinContent(242,24);
   __21->SetBinContent(243,32);
   __21->SetBinContent(244,32);
   __21->SetBinContent(245,48);
   __21->SetBinContent(246,66);
   __21->SetBinContent(247,46);
   __21->SetBinContent(248,66);
   __21->SetBinContent(249,47);
   __21->SetBinContent(250,60);
   __21->SetBinContent(251,62);
   __21->SetBinContent(252,67);
   __21->SetBinContent(253,68);
   __21->SetBinContent(254,66);
   __21->SetBinContent(255,50);
   __21->SetBinContent(256,33);
   __21->SetBinContent(257,31);
   __21->SetBinContent(258,35);
   __21->SetBinContent(259,24);
   __21->SetBinContent(260,19);
   __21->SetBinContent(261,15);
   __21->SetBinContent(262,9);
   __21->SetBinContent(263,9);
   __21->SetBinContent(264,6);
   __21->SetBinContent(265,2);
   __21->SetBinContent(266,4);
   __21->SetBinContent(267,1);
   __21->SetBinContent(268,1);
   __21->SetBinContent(269,2);
   __21->SetEntries(1000);
   __21->SetStats(0);
   __21->GetXaxis()->SetTitle("#LTB_{r}^{b}#GT truth residual [ppm]");
   __21->GetXaxis()->SetRange(177,324);
   __21->GetXaxis()->CenterTitle(true);
   __21->GetXaxis()->SetLabelFont(42);
   __21->GetXaxis()->SetTitleSize(0.04);
   __21->GetXaxis()->SetTitleOffset(1.1);
   __21->GetXaxis()->SetTitleFont(42);
   __21->GetYaxis()->SetTitle("Trials");
   __21->GetYaxis()->CenterTitle(true);
   __21->GetYaxis()->SetNdivisions(4000510);
   __21->GetYaxis()->SetLabelFont(42);
   __21->GetYaxis()->SetTitleSize(0.04);
   __21->GetYaxis()->SetTitleOffset(1.1);
   __21->GetYaxis()->SetTitleFont(42);
   __21->GetZaxis()->SetLabelFont(42);
   __21->GetZaxis()->SetTitleOffset(1);
   __21->GetZaxis()->SetTitleFont(42);
   __21->Draw("HIST");
   
   TPaveText *pt = new TPaveText(0,0,0,0,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("Trials");
   pt_LaTex = pt->AddText("Mean [ppm]");
   pt_LaTex = pt->AddText("RMS [ppm]");
   pt->Draw();
   
   pt = new TPaveText(0,0,0,0,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   pt_LaTex = pt->AddText("1000");
   pt_LaTex = pt->AddText("-0.005
#pm0.008
");
   pt_LaTex = pt->AddText("0.246
#pm0.006
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
