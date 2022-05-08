void BrErr_75()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May  5 13:03:54 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__8 = new TH1D("__8","Number of sub-runs: 75",240,0.4,1.6);
   __8->SetBinContent(7,4);
   __8->SetBinContent(8,25);
   __8->SetBinContent(9,79);
   __8->SetBinContent(10,155);
   __8->SetBinContent(11,276);
   __8->SetBinContent(12,236);
   __8->SetBinContent(13,154);
   __8->SetBinContent(14,52);
   __8->SetBinContent(15,17);
   __8->SetBinContent(16,2);
   __8->SetEntries(1000);
   __8->SetStats(0);
   __8->GetXaxis()->SetTitle("Fitted #delta#LTB_{r}^{b}#GT [ppm]");
   __8->GetXaxis()->SetRange(0,36);
   __8->GetXaxis()->CenterTitle(true);
   __8->GetXaxis()->SetLabelFont(42);
   __8->GetXaxis()->SetTitleSize(0.04);
   __8->GetXaxis()->SetTitleOffset(1.1);
   __8->GetXaxis()->SetTitleFont(42);
   __8->GetYaxis()->SetTitle("Trials / 0.005
 ppm");
   __8->GetYaxis()->CenterTitle(true);
   __8->GetYaxis()->SetNdivisions(4000510);
   __8->GetYaxis()->SetLabelFont(42);
   __8->GetYaxis()->SetTitleSize(0.04);
   __8->GetYaxis()->SetTitleOffset(1.1);
   __8->GetYaxis()->SetTitleFont(42);
   __8->GetZaxis()->SetLabelFont(42);
   __8->GetZaxis()->SetTitleOffset(1);
   __8->GetZaxis()->SetTitleFont(42);
   __8->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("0.454
#pm0.0002
");
   pt_LaTex = pt->AddText("0.00752
#pm0.0002
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
