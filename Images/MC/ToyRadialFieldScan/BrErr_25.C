void BrErr_25()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jan 10 15:42:19 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__2 = new TH1D("__2","Number of sub-runs: 25",240,0.4,1.6);
   __2->SetBinContent(67,3);
   __2->SetBinContent(68,3);
   __2->SetBinContent(69,6);
   __2->SetBinContent(70,12);
   __2->SetBinContent(71,19);
   __2->SetBinContent(72,19);
   __2->SetBinContent(73,31);
   __2->SetBinContent(74,53);
   __2->SetBinContent(75,53);
   __2->SetBinContent(76,79);
   __2->SetBinContent(77,91);
   __2->SetBinContent(78,83);
   __2->SetBinContent(79,95);
   __2->SetBinContent(80,86);
   __2->SetBinContent(81,74);
   __2->SetBinContent(82,68);
   __2->SetBinContent(83,39);
   __2->SetBinContent(84,57);
   __2->SetBinContent(85,42);
   __2->SetBinContent(86,27);
   __2->SetBinContent(87,22);
   __2->SetBinContent(88,17);
   __2->SetBinContent(89,9);
   __2->SetBinContent(90,6);
   __2->SetBinContent(91,3);
   __2->SetBinContent(92,3);
   __2->SetEntries(1000);
   __2->SetStats(0);
   __2->GetXaxis()->SetTitle("Fitted #delta#LTB_{r}^{b}#GT [ppm]");
   __2->GetXaxis()->SetRange(3,155);
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
   pt_LaTex = pt->AddText("0.793
#pm0.0007
");
   pt_LaTex = pt->AddText("0.0224
#pm0.0005
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
