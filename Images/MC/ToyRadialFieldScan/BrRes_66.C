void BrRes_66()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jan  5 17:39:42 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__3 = new TH1D("__3","Number of sub-runs: 66",240,-11,11);
   __3->SetBinContent(81,1);
   __3->SetBinContent(86,1);
   __3->SetBinContent(89,1);
   __3->SetBinContent(91,1);
   __3->SetBinContent(92,1);
   __3->SetBinContent(95,3);
   __3->SetBinContent(96,1);
   __3->SetBinContent(97,8);
   __3->SetBinContent(98,7);
   __3->SetBinContent(99,10);
   __3->SetBinContent(100,6);
   __3->SetBinContent(101,3);
   __3->SetBinContent(102,7);
   __3->SetBinContent(103,9);
   __3->SetBinContent(104,12);
   __3->SetBinContent(105,19);
   __3->SetBinContent(106,10);
   __3->SetBinContent(107,15);
   __3->SetBinContent(108,15);
   __3->SetBinContent(109,25);
   __3->SetBinContent(110,24);
   __3->SetBinContent(111,31);
   __3->SetBinContent(112,25);
   __3->SetBinContent(113,26);
   __3->SetBinContent(114,34);
   __3->SetBinContent(115,35);
   __3->SetBinContent(116,38);
   __3->SetBinContent(117,28);
   __3->SetBinContent(118,37);
   __3->SetBinContent(119,31);
   __3->SetBinContent(120,30);
   __3->SetBinContent(121,36);
   __3->SetBinContent(122,41);
   __3->SetBinContent(123,43);
   __3->SetBinContent(124,32);
   __3->SetBinContent(125,44);
   __3->SetBinContent(126,33);
   __3->SetBinContent(127,20);
   __3->SetBinContent(128,36);
   __3->SetBinContent(129,33);
   __3->SetBinContent(130,20);
   __3->SetBinContent(131,18);
   __3->SetBinContent(132,21);
   __3->SetBinContent(133,12);
   __3->SetBinContent(134,17);
   __3->SetBinContent(135,11);
   __3->SetBinContent(136,9);
   __3->SetBinContent(137,19);
   __3->SetBinContent(138,3);
   __3->SetBinContent(139,7);
   __3->SetBinContent(140,6);
   __3->SetBinContent(141,9);
   __3->SetBinContent(142,9);
   __3->SetBinContent(143,8);
   __3->SetBinContent(144,3);
   __3->SetBinContent(145,4);
   __3->SetBinContent(146,3);
   __3->SetBinContent(148,5);
   __3->SetBinContent(149,3);
   __3->SetBinContent(156,1);
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
   pt_LaTex = pt->AddText("-0.006
#pm0.03
");
   pt_LaTex = pt->AddText("1.01
#pm0.02
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
