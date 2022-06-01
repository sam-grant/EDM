void BrRes_125()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May 31 19:16:28 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__15 = new TH1D("__15","Number of sub-runs: 125",240,-11,11);
   __15->SetBinContent(106,1);
   __15->SetBinContent(108,1);
   __15->SetBinContent(109,1);
   __15->SetBinContent(110,4);
   __15->SetBinContent(111,5);
   __15->SetBinContent(112,7);
   __15->SetBinContent(113,17);
   __15->SetBinContent(114,22);
   __15->SetBinContent(115,49);
   __15->SetBinContent(116,65);
   __15->SetBinContent(117,70);
   __15->SetBinContent(118,96);
   __15->SetBinContent(119,76);
   __15->SetBinContent(120,111);
   __15->SetBinContent(121,84);
   __15->SetBinContent(122,90);
   __15->SetBinContent(123,92);
   __15->SetBinContent(124,67);
   __15->SetBinContent(125,39);
   __15->SetBinContent(126,42);
   __15->SetBinContent(127,25);
   __15->SetBinContent(128,18);
   __15->SetBinContent(129,7);
   __15->SetBinContent(130,6);
   __15->SetBinContent(131,3);
   __15->SetBinContent(133,1);
   __15->SetBinContent(135,1);
   __15->SetEntries(1000);
   __15->SetStats(0);
   __15->GetXaxis()->SetTitle("#LTB_{r}^{b}#GT truth residual [ppm]");
   __15->GetXaxis()->SetRange(53,188);
   __15->GetXaxis()->CenterTitle(true);
   __15->GetXaxis()->SetLabelFont(42);
   __15->GetXaxis()->SetTitleSize(0.04);
   __15->GetXaxis()->SetTitleOffset(1.1);
   __15->GetXaxis()->SetTitleFont(42);
   __15->GetYaxis()->SetTitle("Trials / 0.09
 ppm");
   __15->GetYaxis()->CenterTitle(true);
   __15->GetYaxis()->SetNdivisions(4000510);
   __15->GetYaxis()->SetLabelFont(42);
   __15->GetYaxis()->SetTitleSize(0.04);
   __15->GetYaxis()->SetTitleOffset(1.1);
   __15->GetYaxis()->SetTitleFont(42);
   __15->GetZaxis()->SetLabelFont(42);
   __15->GetZaxis()->SetTitleOffset(1);
   __15->GetZaxis()->SetTitleFont(42);
   __15->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("-0.0141
#pm0.01
");
   pt_LaTex = pt->AddText("0.363
#pm0.008
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
