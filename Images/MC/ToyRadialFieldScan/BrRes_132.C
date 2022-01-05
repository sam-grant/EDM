void BrRes_132()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jan  5 17:38:04 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__6 = new TH1D("__6","Number of sub-runs: 132",240,-11,11);
   __6->SetBinContent(93,1);
   __6->SetBinContent(98,1);
   __6->SetBinContent(100,1);
   __6->SetBinContent(101,3);
   __6->SetBinContent(102,1);
   __6->SetBinContent(103,3);
   __6->SetBinContent(105,10);
   __6->SetBinContent(106,3);
   __6->SetBinContent(107,9);
   __6->SetBinContent(108,13);
   __6->SetBinContent(109,13);
   __6->SetBinContent(110,23);
   __6->SetBinContent(111,27);
   __6->SetBinContent(112,40);
   __6->SetBinContent(113,33);
   __6->SetBinContent(114,29);
   __6->SetBinContent(115,39);
   __6->SetBinContent(116,47);
   __6->SetBinContent(117,44);
   __6->SetBinContent(118,50);
   __6->SetBinContent(119,60);
   __6->SetBinContent(120,58);
   __6->SetBinContent(121,51);
   __6->SetBinContent(122,52);
   __6->SetBinContent(123,61);
   __6->SetBinContent(124,47);
   __6->SetBinContent(125,39);
   __6->SetBinContent(126,37);
   __6->SetBinContent(127,27);
   __6->SetBinContent(128,30);
   __6->SetBinContent(129,21);
   __6->SetBinContent(130,20);
   __6->SetBinContent(131,23);
   __6->SetBinContent(132,15);
   __6->SetBinContent(133,13);
   __6->SetBinContent(134,20);
   __6->SetBinContent(135,13);
   __6->SetBinContent(136,5);
   __6->SetBinContent(137,6);
   __6->SetBinContent(138,4);
   __6->SetBinContent(139,2);
   __6->SetBinContent(141,1);
   __6->SetBinContent(142,2);
   __6->SetBinContent(144,1);
   __6->SetBinContent(145,1);
   __6->SetBinContent(147,1);
   __6->SetEntries(1000);
   __6->SetStats(0);
   __6->GetXaxis()->SetTitle("#LTB_{r}^{b}#GT truth residual [ppm]");
   __6->GetXaxis()->SetRange(0,241);
   __6->GetXaxis()->CenterTitle(true);
   __6->GetXaxis()->SetLabelFont(42);
   __6->GetXaxis()->SetTitleSize(0.04);
   __6->GetXaxis()->SetTitleOffset(1.1);
   __6->GetXaxis()->SetTitleFont(42);
   __6->GetYaxis()->SetTitle("Trials / 0.09
 ppm");
   __6->GetYaxis()->CenterTitle(true);
   __6->GetYaxis()->SetNdivisions(4000510);
   __6->GetYaxis()->SetLabelFont(42);
   __6->GetYaxis()->SetTitleSize(0.04);
   __6->GetYaxis()->SetTitleOffset(1.1);
   __6->GetYaxis()->SetTitleFont(42);
   __6->GetZaxis()->SetLabelFont(42);
   __6->GetZaxis()->SetTitleOffset(1);
   __6->GetZaxis()->SetTitleFont(42);
   __6->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("0.00871
#pm0.02
");
   pt_LaTex = pt->AddText("0.69
#pm0.02
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
