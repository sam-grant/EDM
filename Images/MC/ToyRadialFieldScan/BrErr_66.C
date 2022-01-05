void BrErr_66()
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
   
   TH1D *__2 = new TH1D("__2","Number of sub-runs: 66",240,0.4,1.6);
   __2->SetBinContent(99,1);
   __2->SetBinContent(101,2);
   __2->SetBinContent(102,7);
   __2->SetBinContent(103,5);
   __2->SetBinContent(104,10);
   __2->SetBinContent(105,9);
   __2->SetBinContent(106,11);
   __2->SetBinContent(107,18);
   __2->SetBinContent(108,11);
   __2->SetBinContent(109,22);
   __2->SetBinContent(110,30);
   __2->SetBinContent(111,44);
   __2->SetBinContent(112,47);
   __2->SetBinContent(113,38);
   __2->SetBinContent(114,52);
   __2->SetBinContent(115,68);
   __2->SetBinContent(116,47);
   __2->SetBinContent(117,54);
   __2->SetBinContent(118,62);
   __2->SetBinContent(119,57);
   __2->SetBinContent(120,72);
   __2->SetBinContent(121,42);
   __2->SetBinContent(122,42);
   __2->SetBinContent(123,41);
   __2->SetBinContent(124,34);
   __2->SetBinContent(125,30);
   __2->SetBinContent(126,32);
   __2->SetBinContent(127,39);
   __2->SetBinContent(128,16);
   __2->SetBinContent(129,14);
   __2->SetBinContent(130,6);
   __2->SetBinContent(131,5);
   __2->SetBinContent(132,5);
   __2->SetBinContent(133,12);
   __2->SetBinContent(134,3);
   __2->SetBinContent(135,4);
   __2->SetBinContent(137,2);
   __2->SetBinContent(139,3);
   __2->SetBinContent(142,1);
   __2->SetBinContent(143,1);
   __2->SetBinContent(145,1);
   __2->SetEntries(1000);
   __2->SetStats(0);
   __2->GetXaxis()->SetTitle("Fitted #delta#LTB_{r}^{b}#GT [ppm]");
   __2->GetXaxis()->SetRange(1,235);
   __2->GetXaxis()->CenterTitle(true);
   __2->GetXaxis()->SetLabelFont(42);
   __2->GetXaxis()->SetTitleSize(0.04);
   __2->GetXaxis()->SetTitleOffset(1.1);
   __2->GetXaxis()->SetTitleFont(42);
   __2->GetYaxis()->SetTitle("Trials / 0.005
 ppm");
   __2->GetYaxis()->CenterTitle(true);
   __2->GetYaxis()->SetNdivisions(4000510);
   __2->GetYaxis()->SetLabelFont(42);
   __2->GetYaxis()->SetTitleSize(0.04);
   __2->GetYaxis()->SetTitleOffset(1.1);
   __2->GetYaxis()->SetTitleFont(42);
   __2->GetZaxis()->SetLabelFont(42);
   __2->GetZaxis()->SetTitleOffset(1);
   __2->GetZaxis()->SetTitleFont(42);
   __2->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("1
#pm0.001
");
   pt_LaTex = pt->AddText("0.0344
#pm0.0008
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
