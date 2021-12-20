void BrRes_250()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec 20 14:38:59 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__30 = new TH1D("__30","Number of sub-runs: 250",500,-10,10);
   __30->SetBinContent(235,2);
   __30->SetBinContent(237,2);
   __30->SetBinContent(238,4);
   __30->SetBinContent(239,5);
   __30->SetBinContent(240,11);
   __30->SetBinContent(241,15);
   __30->SetBinContent(242,28);
   __30->SetBinContent(243,20);
   __30->SetBinContent(244,37);
   __30->SetBinContent(245,40);
   __30->SetBinContent(246,48);
   __30->SetBinContent(247,68);
   __30->SetBinContent(248,70);
   __30->SetBinContent(249,73);
   __30->SetBinContent(250,75);
   __30->SetBinContent(251,81);
   __30->SetBinContent(252,86);
   __30->SetBinContent(253,72);
   __30->SetBinContent(254,55);
   __30->SetBinContent(255,51);
   __30->SetBinContent(256,34);
   __30->SetBinContent(257,29);
   __30->SetBinContent(258,29);
   __30->SetBinContent(259,29);
   __30->SetBinContent(260,10);
   __30->SetBinContent(261,10);
   __30->SetBinContent(262,9);
   __30->SetBinContent(263,3);
   __30->SetBinContent(264,1);
   __30->SetBinContent(265,3);
   __30->SetEntries(1000);
   __30->SetStats(0);
   __30->GetXaxis()->SetTitle("#LTB_{r}^{b}#GT truth residual [ppm]");
   __30->GetXaxis()->SetRange(189,311);
   __30->GetXaxis()->CenterTitle(true);
   __30->GetXaxis()->SetLabelFont(42);
   __30->GetXaxis()->SetTitleSize(0.04);
   __30->GetXaxis()->SetTitleOffset(1.1);
   __30->GetXaxis()->SetTitleFont(42);
   __30->GetYaxis()->SetTitle("Trials");
   __30->GetYaxis()->CenterTitle(true);
   __30->GetYaxis()->SetNdivisions(4000510);
   __30->GetYaxis()->SetLabelFont(42);
   __30->GetYaxis()->SetTitleSize(0.04);
   __30->GetYaxis()->SetTitleOffset(1.1);
   __30->GetYaxis()->SetTitleFont(42);
   __30->GetZaxis()->SetLabelFont(42);
   __30->GetZaxis()->SetTitleOffset(1);
   __30->GetZaxis()->SetTitleFont(42);
   __30->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("-0.002
#pm0.006
");
   pt_LaTex = pt->AddText("0.203
#pm0.005
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
