void BrErr_200()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec 20 14:38:56 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__23 = new TH1D("__23","Number of sub-runs: 200",2000,0,1);
   __23->SetBinContent(445,1);
   __23->SetBinContent(446,1);
   __23->SetBinContent(447,8);
   __23->SetBinContent(448,10);
   __23->SetBinContent(449,23);
   __23->SetBinContent(450,42);
   __23->SetBinContent(451,72);
   __23->SetBinContent(452,84);
   __23->SetBinContent(453,115);
   __23->SetBinContent(454,108);
   __23->SetBinContent(455,144);
   __23->SetBinContent(456,104);
   __23->SetBinContent(457,90);
   __23->SetBinContent(458,69);
   __23->SetBinContent(459,57);
   __23->SetBinContent(460,42);
   __23->SetBinContent(461,15);
   __23->SetBinContent(462,9);
   __23->SetBinContent(463,5);
   __23->SetBinContent(464,1);
   __23->SetEntries(1000);
   __23->SetStats(0);
   __23->GetXaxis()->SetTitle("Fitted #delta#LTB_{r}^{b}#GT [ppm]");
   __23->GetXaxis()->SetRange(417,492);
   __23->GetXaxis()->CenterTitle(true);
   __23->GetXaxis()->SetLabelFont(42);
   __23->GetXaxis()->SetTitleSize(0.04);
   __23->GetXaxis()->SetTitleOffset(1.1);
   __23->GetXaxis()->SetTitleFont(42);
   __23->GetYaxis()->SetTitle("Trials");
   __23->GetYaxis()->CenterTitle(true);
   __23->GetYaxis()->SetNdivisions(4000510);
   __23->GetYaxis()->SetLabelFont(42);
   __23->GetYaxis()->SetTitleSize(0.04);
   __23->GetYaxis()->SetTitleOffset(1.1);
   __23->GetYaxis()->SetTitleFont(42);
   __23->GetZaxis()->SetLabelFont(42);
   __23->GetZaxis()->SetTitleOffset(1);
   __23->GetZaxis()->SetTitleFont(42);
   __23->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("0.2
#pm5e-05
");
   pt_LaTex = pt->AddText("0.00157
#pm4e-05
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
