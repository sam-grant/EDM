void BrErr_50()
{
//=========Macro generated from canvas: c/c
//=========  (Sat Jun 25 13:30:48 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__5 = new TH1D("__5","Number of sub-runs: 50",240,0.4,1.6);
   __5->SetBinContent(120,1);
   __5->SetBinContent(122,1);
   __5->SetBinContent(125,1);
   __5->SetBinContent(127,3);
   __5->SetBinContent(128,2);
   __5->SetBinContent(129,5);
   __5->SetBinContent(130,3);
   __5->SetBinContent(131,7);
   __5->SetBinContent(132,9);
   __5->SetBinContent(133,17);
   __5->SetBinContent(134,15);
   __5->SetBinContent(135,16);
   __5->SetBinContent(136,23);
   __5->SetBinContent(137,25);
   __5->SetBinContent(138,34);
   __5->SetBinContent(139,32);
   __5->SetBinContent(140,27);
   __5->SetBinContent(141,37);
   __5->SetBinContent(142,49);
   __5->SetBinContent(143,38);
   __5->SetBinContent(144,32);
   __5->SetBinContent(145,43);
   __5->SetBinContent(146,42);
   __5->SetBinContent(147,39);
   __5->SetBinContent(148,47);
   __5->SetBinContent(149,41);
   __5->SetBinContent(150,55);
   __5->SetBinContent(151,36);
   __5->SetBinContent(152,41);
   __5->SetBinContent(153,35);
   __5->SetBinContent(154,32);
   __5->SetBinContent(155,22);
   __5->SetBinContent(156,34);
   __5->SetBinContent(157,20);
   __5->SetBinContent(158,24);
   __5->SetBinContent(159,22);
   __5->SetBinContent(160,13);
   __5->SetBinContent(161,9);
   __5->SetBinContent(162,12);
   __5->SetBinContent(163,15);
   __5->SetBinContent(164,8);
   __5->SetBinContent(165,8);
   __5->SetBinContent(166,1);
   __5->SetBinContent(167,7);
   __5->SetBinContent(168,3);
   __5->SetBinContent(169,5);
   __5->SetBinContent(170,1);
   __5->SetBinContent(171,3);
   __5->SetBinContent(172,2);
   __5->SetBinContent(175,1);
   __5->SetBinContent(176,1);
   __5->SetBinContent(183,1);
   __5->SetEntries(1000);
   __5->SetStats(0);
   __5->GetXaxis()->SetTitle("Fitted #delta#LTB_{r}^{b}#GT [ppm]");
   __5->GetXaxis()->SetRange(0,241);
   __5->GetXaxis()->CenterTitle(true);
   __5->GetXaxis()->SetLabelFont(42);
   __5->GetXaxis()->SetTitleSize(0.04);
   __5->GetXaxis()->SetTitleOffset(1.1);
   __5->GetXaxis()->SetTitleFont(42);
   __5->GetYaxis()->SetTitle("Trials / 0.005
 ppm");
   __5->GetYaxis()->CenterTitle(true);
   __5->GetYaxis()->SetNdivisions(4000510);
   __5->GetYaxis()->SetLabelFont(42);
   __5->GetYaxis()->SetTitleSize(0.04);
   __5->GetYaxis()->SetTitleOffset(1.1);
   __5->GetYaxis()->SetTitleFont(42);
   __5->GetZaxis()->SetLabelFont(42);
   __5->GetZaxis()->SetTitleOffset(1);
   __5->GetZaxis()->SetTitleFont(42);
   __5->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("1.14
#pm0.001
");
   pt_LaTex = pt->AddText("0.0445
#pm0.001
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
