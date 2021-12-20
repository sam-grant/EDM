void BrRes_100()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Dec 19 19:53:19 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__12 = new TH1D("__12","Number of sub-runs: 100",500,-10,10);
   __12->SetBinContent(227,1);
   __12->SetBinContent(229,1);
   __12->SetBinContent(231,4);
   __12->SetBinContent(232,5);
   __12->SetBinContent(233,2);
   __12->SetBinContent(234,6);
   __12->SetBinContent(235,7);
   __12->SetBinContent(236,5);
   __12->SetBinContent(237,8);
   __12->SetBinContent(238,9);
   __12->SetBinContent(239,22);
   __12->SetBinContent(240,21);
   __12->SetBinContent(241,33);
   __12->SetBinContent(242,25);
   __12->SetBinContent(243,32);
   __12->SetBinContent(244,44);
   __12->SetBinContent(245,45);
   __12->SetBinContent(246,45);
   __12->SetBinContent(247,43);
   __12->SetBinContent(248,42);
   __12->SetBinContent(249,55);
   __12->SetBinContent(250,49);
   __12->SetBinContent(251,44);
   __12->SetBinContent(252,52);
   __12->SetBinContent(253,49);
   __12->SetBinContent(254,40);
   __12->SetBinContent(255,52);
   __12->SetBinContent(256,41);
   __12->SetBinContent(257,36);
   __12->SetBinContent(258,28);
   __12->SetBinContent(259,28);
   __12->SetBinContent(260,30);
   __12->SetBinContent(261,16);
   __12->SetBinContent(262,14);
   __12->SetBinContent(263,15);
   __12->SetBinContent(264,13);
   __12->SetBinContent(265,12);
   __12->SetBinContent(266,5);
   __12->SetBinContent(267,5);
   __12->SetBinContent(268,3);
   __12->SetBinContent(269,4);
   __12->SetBinContent(270,4);
   __12->SetBinContent(271,2);
   __12->SetBinContent(275,1);
   __12->SetBinContent(277,1);
   __12->SetBinContent(278,1);
   __12->SetEntries(1000);
   __12->SetStats(0);
   __12->GetXaxis()->SetTitle("#LTB_{r}^{b}#GT truth residual [ppm]");
   __12->GetXaxis()->SetRange(188,313);
   __12->GetXaxis()->CenterTitle(true);
   __12->GetXaxis()->SetLabelFont(42);
   __12->GetXaxis()->SetTitleSize(0.04);
   __12->GetXaxis()->SetTitleOffset(1.1);
   __12->GetXaxis()->SetTitleFont(42);
   __12->GetYaxis()->SetTitle("Trials");
   __12->GetYaxis()->CenterTitle(true);
   __12->GetYaxis()->SetNdivisions(4000510);
   __12->GetYaxis()->SetLabelFont(42);
   __12->GetYaxis()->SetTitleSize(0.04);
   __12->GetYaxis()->SetTitleOffset(1.1);
   __12->GetYaxis()->SetTitleFont(42);
   __12->GetZaxis()->SetLabelFont(42);
   __12->GetZaxis()->SetTitleOffset(1);
   __12->GetZaxis()->SetTitleFont(42);
   __12->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("0.002
#pm0.01
");
   pt_LaTex = pt->AddText("0.31
#pm0.007
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
