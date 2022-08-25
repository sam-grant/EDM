void BrRes_325()
{
//=========Macro generated from canvas: c/c
//=========  (Sat Jun 25 13:30:55 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__39 = new TH1D("__39","Number of sub-runs: 325",240,-11,11);
   __39->SetBinContent(105,1);
   __39->SetBinContent(106,1);
   __39->SetBinContent(107,3);
   __39->SetBinContent(108,2);
   __39->SetBinContent(109,3);
   __39->SetBinContent(110,9);
   __39->SetBinContent(111,13);
   __39->SetBinContent(112,23);
   __39->SetBinContent(113,20);
   __39->SetBinContent(114,37);
   __39->SetBinContent(115,42);
   __39->SetBinContent(116,49);
   __39->SetBinContent(117,60);
   __39->SetBinContent(118,70);
   __39->SetBinContent(119,84);
   __39->SetBinContent(120,88);
   __39->SetBinContent(121,81);
   __39->SetBinContent(122,74);
   __39->SetBinContent(123,71);
   __39->SetBinContent(124,57);
   __39->SetBinContent(125,51);
   __39->SetBinContent(126,46);
   __39->SetBinContent(127,42);
   __39->SetBinContent(128,20);
   __39->SetBinContent(129,13);
   __39->SetBinContent(130,11);
   __39->SetBinContent(131,7);
   __39->SetBinContent(132,8);
   __39->SetBinContent(133,9);
   __39->SetBinContent(134,3);
   __39->SetBinContent(135,1);
   __39->SetBinContent(137,1);
   __39->SetEntries(1000);
   __39->SetStats(0);
   __39->GetXaxis()->SetTitle("#LTB_{r}^{b}#GT truth residual [ppm]");
   __39->GetXaxis()->SetRange(36,205);
   __39->GetXaxis()->CenterTitle(true);
   __39->GetXaxis()->SetLabelFont(42);
   __39->GetXaxis()->SetTitleSize(0.04);
   __39->GetXaxis()->SetTitleOffset(1.1);
   __39->GetXaxis()->SetTitleFont(42);
   __39->GetYaxis()->SetTitle("Trials / 0.09
 ppm");
   __39->GetYaxis()->CenterTitle(true);
   __39->GetYaxis()->SetNdivisions(4000510);
   __39->GetYaxis()->SetLabelFont(42);
   __39->GetYaxis()->SetTitleSize(0.04);
   __39->GetYaxis()->SetTitleOffset(1.1);
   __39->GetYaxis()->SetTitleFont(42);
   __39->GetZaxis()->SetLabelFont(42);
   __39->GetZaxis()->SetTitleOffset(1);
   __39->GetZaxis()->SetTitleFont(42);
   __39->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("0.00532
#pm0.01
");
   pt_LaTex = pt->AddText("0.456
#pm0.01
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
