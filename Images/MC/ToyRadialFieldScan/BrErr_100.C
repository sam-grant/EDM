void BrErr_100()
{
//=========Macro generated from canvas: c/c
//=========  (Sat Jun 25 13:30:49 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__11 = new TH1D("__11","Number of sub-runs: 100",240,0.4,1.6);
   __11->SetBinContent(68,1);
   __11->SetBinContent(69,4);
   __11->SetBinContent(70,3);
   __11->SetBinContent(71,4);
   __11->SetBinContent(72,12);
   __11->SetBinContent(73,10);
   __11->SetBinContent(74,30);
   __11->SetBinContent(75,29);
   __11->SetBinContent(76,53);
   __11->SetBinContent(77,55);
   __11->SetBinContent(78,61);
   __11->SetBinContent(79,86);
   __11->SetBinContent(80,82);
   __11->SetBinContent(81,99);
   __11->SetBinContent(82,83);
   __11->SetBinContent(83,86);
   __11->SetBinContent(84,69);
   __11->SetBinContent(85,58);
   __11->SetBinContent(86,49);
   __11->SetBinContent(87,36);
   __11->SetBinContent(88,23);
   __11->SetBinContent(89,22);
   __11->SetBinContent(90,17);
   __11->SetBinContent(91,8);
   __11->SetBinContent(92,10);
   __11->SetBinContent(93,1);
   __11->SetBinContent(94,4);
   __11->SetBinContent(95,4);
   __11->SetBinContent(98,1);
   __11->SetEntries(1000);
   __11->SetStats(0);
   __11->GetXaxis()->SetTitle("Fitted #delta#LTB_{r}^{b}#GT [ppm]");
   __11->GetXaxis()->SetRange(4,159);
   __11->GetXaxis()->CenterTitle(true);
   __11->GetXaxis()->SetLabelFont(42);
   __11->GetXaxis()->SetTitleSize(0.04);
   __11->GetXaxis()->SetTitleOffset(1.1);
   __11->GetXaxis()->SetTitleFont(42);
   __11->GetYaxis()->SetTitle("Trials / 0.005
 ppm");
   __11->GetYaxis()->CenterTitle(true);
   __11->GetYaxis()->SetNdivisions(4000510);
   __11->GetYaxis()->SetLabelFont(42);
   __11->GetYaxis()->SetTitleSize(0.04);
   __11->GetYaxis()->SetTitleOffset(1.1);
   __11->GetYaxis()->SetTitleFont(42);
   __11->GetZaxis()->SetLabelFont(42);
   __11->GetZaxis()->SetTitleOffset(1);
   __11->GetZaxis()->SetTitleFont(42);
   __11->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("0.804
#pm0.0007
");
   pt_LaTex = pt->AddText("0.0229
#pm0.0005
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
