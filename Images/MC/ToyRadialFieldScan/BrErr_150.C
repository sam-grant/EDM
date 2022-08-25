void BrErr_150()
{
//=========Macro generated from canvas: c/c
//=========  (Sat Jun 25 13:30:51 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__17 = new TH1D("__17","Number of sub-runs: 150",240,0.4,1.6);
   __17->SetBinContent(42,1);
   __17->SetBinContent(43,2);
   __17->SetBinContent(44,9);
   __17->SetBinContent(45,24);
   __17->SetBinContent(46,32);
   __17->SetBinContent(47,52);
   __17->SetBinContent(48,58);
   __17->SetBinContent(49,102);
   __17->SetBinContent(50,113);
   __17->SetBinContent(51,128);
   __17->SetBinContent(52,124);
   __17->SetBinContent(53,127);
   __17->SetBinContent(54,87);
   __17->SetBinContent(55,56);
   __17->SetBinContent(56,34);
   __17->SetBinContent(57,22);
   __17->SetBinContent(58,17);
   __17->SetBinContent(59,10);
   __17->SetBinContent(60,1);
   __17->SetBinContent(62,1);
   __17->SetEntries(1000);
   __17->SetStats(0);
   __17->GetXaxis()->SetTitle("Fitted #delta#LTB_{r}^{b}#GT [ppm]");
   __17->GetXaxis()->SetRange(0,104);
   __17->GetXaxis()->CenterTitle(true);
   __17->GetXaxis()->SetLabelFont(42);
   __17->GetXaxis()->SetTitleSize(0.04);
   __17->GetXaxis()->SetTitleOffset(1.1);
   __17->GetXaxis()->SetTitleFont(42);
   __17->GetYaxis()->SetTitle("Trials / 0.005
 ppm");
   __17->GetYaxis()->CenterTitle(true);
   __17->GetYaxis()->SetNdivisions(4000510);
   __17->GetYaxis()->SetLabelFont(42);
   __17->GetYaxis()->SetTitleSize(0.04);
   __17->GetYaxis()->SetTitleOffset(1.1);
   __17->GetYaxis()->SetTitleFont(42);
   __17->GetZaxis()->SetLabelFont(42);
   __17->GetZaxis()->SetTitleOffset(1);
   __17->GetZaxis()->SetTitleFont(42);
   __17->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("0.654
#pm0.0005
");
   pt_LaTex = pt->AddText("0.0156
#pm0.0003
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
