void BrRes_75()
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
   
   TH1D *__9 = new TH1D("__9","Number of sub-runs: 75",240,-11,11);
   __9->SetBinContent(92,2);
   __9->SetBinContent(94,5);
   __9->SetBinContent(95,2);
   __9->SetBinContent(96,1);
   __9->SetBinContent(97,2);
   __9->SetBinContent(98,2);
   __9->SetBinContent(99,2);
   __9->SetBinContent(100,6);
   __9->SetBinContent(101,7);
   __9->SetBinContent(102,8);
   __9->SetBinContent(103,6);
   __9->SetBinContent(104,10);
   __9->SetBinContent(105,8);
   __9->SetBinContent(106,13);
   __9->SetBinContent(107,20);
   __9->SetBinContent(108,16);
   __9->SetBinContent(109,24);
   __9->SetBinContent(110,24);
   __9->SetBinContent(111,27);
   __9->SetBinContent(112,32);
   __9->SetBinContent(113,35);
   __9->SetBinContent(114,28);
   __9->SetBinContent(115,35);
   __9->SetBinContent(116,34);
   __9->SetBinContent(117,29);
   __9->SetBinContent(118,54);
   __9->SetBinContent(119,40);
   __9->SetBinContent(120,29);
   __9->SetBinContent(121,47);
   __9->SetBinContent(122,43);
   __9->SetBinContent(123,28);
   __9->SetBinContent(124,44);
   __9->SetBinContent(125,39);
   __9->SetBinContent(126,43);
   __9->SetBinContent(127,25);
   __9->SetBinContent(128,24);
   __9->SetBinContent(129,35);
   __9->SetBinContent(130,30);
   __9->SetBinContent(131,22);
   __9->SetBinContent(132,21);
   __9->SetBinContent(133,19);
   __9->SetBinContent(134,10);
   __9->SetBinContent(135,10);
   __9->SetBinContent(136,8);
   __9->SetBinContent(137,6);
   __9->SetBinContent(138,4);
   __9->SetBinContent(139,12);
   __9->SetBinContent(140,5);
   __9->SetBinContent(141,1);
   __9->SetBinContent(142,4);
   __9->SetBinContent(143,3);
   __9->SetBinContent(144,4);
   __9->SetBinContent(145,4);
   __9->SetBinContent(146,1);
   __9->SetBinContent(147,1);
   __9->SetBinContent(148,1);
   __9->SetBinContent(149,1);
   __9->SetBinContent(150,1);
   __9->SetBinContent(153,1);
   __9->SetBinContent(155,2);
   __9->SetEntries(1000);
   __9->SetStats(0);
   __9->GetXaxis()->SetTitle("#LTB_{r}^{b}#GT truth residual [ppm]");
   __9->GetXaxis()->SetRange(0,241);
   __9->GetXaxis()->CenterTitle(true);
   __9->GetXaxis()->SetLabelFont(42);
   __9->GetXaxis()->SetTitleSize(0.04);
   __9->GetXaxis()->SetTitleOffset(1.1);
   __9->GetXaxis()->SetTitleFont(42);
   __9->GetYaxis()->SetTitle("Trials / 0.09
 ppm");
   __9->GetYaxis()->CenterTitle(true);
   __9->GetYaxis()->SetNdivisions(4000510);
   __9->GetYaxis()->SetLabelFont(42);
   __9->GetYaxis()->SetTitleSize(0.04);
   __9->GetYaxis()->SetTitleOffset(1.1);
   __9->GetYaxis()->SetTitleFont(42);
   __9->GetZaxis()->SetLabelFont(42);
   __9->GetZaxis()->SetTitleOffset(1);
   __9->GetZaxis()->SetTitleFont(42);
   __9->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("-0.0148
#pm0.03
");
   pt_LaTex = pt->AddText("0.91
#pm0.02
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
