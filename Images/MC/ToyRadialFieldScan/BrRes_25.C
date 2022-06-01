void BrRes_25()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May 31 19:16:22 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__3 = new TH1D("__3","Number of sub-runs: 25",240,-11,11);
   __3->SetBinContent(97,1);
   __3->SetBinContent(98,4);
   __3->SetBinContent(99,3);
   __3->SetBinContent(101,3);
   __3->SetBinContent(102,4);
   __3->SetBinContent(103,7);
   __3->SetBinContent(104,7);
   __3->SetBinContent(105,8);
   __3->SetBinContent(106,12);
   __3->SetBinContent(107,13);
   __3->SetBinContent(108,23);
   __3->SetBinContent(109,13);
   __3->SetBinContent(110,30);
   __3->SetBinContent(111,28);
   __3->SetBinContent(112,27);
   __3->SetBinContent(113,42);
   __3->SetBinContent(114,39);
   __3->SetBinContent(115,42);
   __3->SetBinContent(116,37);
   __3->SetBinContent(117,38);
   __3->SetBinContent(118,46);
   __3->SetBinContent(119,41);
   __3->SetBinContent(120,42);
   __3->SetBinContent(121,37);
   __3->SetBinContent(122,44);
   __3->SetBinContent(123,43);
   __3->SetBinContent(124,36);
   __3->SetBinContent(125,47);
   __3->SetBinContent(126,30);
   __3->SetBinContent(127,37);
   __3->SetBinContent(128,30);
   __3->SetBinContent(129,31);
   __3->SetBinContent(130,27);
   __3->SetBinContent(131,21);
   __3->SetBinContent(132,22);
   __3->SetBinContent(133,14);
   __3->SetBinContent(134,8);
   __3->SetBinContent(135,17);
   __3->SetBinContent(136,16);
   __3->SetBinContent(137,9);
   __3->SetBinContent(138,7);
   __3->SetBinContent(139,1);
   __3->SetBinContent(140,3);
   __3->SetBinContent(141,5);
   __3->SetBinContent(142,3);
   __3->SetBinContent(143,1);
   __3->SetBinContent(144,1);
   __3->SetEntries(1000);
   __3->SetStats(0);
   __3->GetXaxis()->SetTitle("#LTB_{r}^{b}#GT truth residual [ppm]");
   __3->GetXaxis()->SetRange(0,241);
   __3->GetXaxis()->CenterTitle(true);
   __3->GetXaxis()->SetLabelFont(42);
   __3->GetXaxis()->SetTitleSize(0.04);
   __3->GetXaxis()->SetTitleOffset(1.1);
   __3->GetXaxis()->SetTitleFont(42);
   __3->GetYaxis()->SetTitle("Trials / 0.09
 ppm");
   __3->GetYaxis()->CenterTitle(true);
   __3->GetYaxis()->SetNdivisions(4000510);
   __3->GetYaxis()->SetLabelFont(42);
   __3->GetYaxis()->SetTitleSize(0.04);
   __3->GetYaxis()->SetTitleOffset(1.1);
   __3->GetYaxis()->SetTitleFont(42);
   __3->GetZaxis()->SetLabelFont(42);
   __3->GetZaxis()->SetTitleOffset(1);
   __3->GetZaxis()->SetTitleFont(42);
   __3->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("-0.00678
#pm0.03
");
   pt_LaTex = pt->AddText("0.793
#pm0.02
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
