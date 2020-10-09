void Result_NSUBRUN_25_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct  9 09:35:33 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-45,-0.1274046,45,0.1700324);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1009[4] = {
   -30,
   -10,
   10,
   30};
   Double_t Graph0_fy1009[4] = {
   0.1101271,
   0.05287051,
   0.0260309,
   -0.06749927};
   Double_t Graph0_fex1009[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1009[4] = {
   0.01033248,
   0.01033248,
   0.01033248,
   0.01033248};
   TGraphErrors *gre = new TGraphErrors(4,Graph0_fx1009,Graph0_fy1009,Graph0_fex1009,Graph0_fey1009);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 25");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01009 = new TH1F("Graph_Graph01009","Sub-runs 25",100,-36,36);
   Graph_Graph01009->SetMinimum(-0.09766088);
   Graph_Graph01009->SetMaximum(0.1402887);
   Graph_Graph01009->SetDirectory(0);
   Graph_Graph01009->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01009->SetLineColor(ci);
   Graph_Graph01009->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01009->GetXaxis()->CenterTitle(true);
   Graph_Graph01009->GetXaxis()->SetLabelFont(42);
   Graph_Graph01009->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01009->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01009->GetXaxis()->SetTitleFont(42);
   Graph_Graph01009->GetYaxis()->SetTitle("#LTy#GT / QHV [mm/kV]");
   Graph_Graph01009->GetYaxis()->CenterTitle(true);
   Graph_Graph01009->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01009->GetYaxis()->SetLabelFont(42);
   Graph_Graph01009->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01009->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01009->GetYaxis()->SetTitleFont(42);
   Graph_Graph01009->GetZaxis()->SetLabelFont(42);
   Graph_Graph01009->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01009->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01009);
   
   
   TF1 *fieldLineFit1010 = new TF1("fieldLineFit","pol 1",-36,36, TF1::EAddToList::kNo);
   fieldLineFit1010->SetFillColor(19);
   fieldLineFit1010->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fieldLineFit1010->SetLineColor(ci);
   fieldLineFit1010->SetLineWidth(2);
   fieldLineFit1010->SetChisquare(7.497524);
   fieldLineFit1010->SetNDF(2);
   fieldLineFit1010->GetXaxis()->SetLabelFont(42);
   fieldLineFit1010->GetXaxis()->SetTitleOffset(1);
   fieldLineFit1010->GetXaxis()->SetTitleFont(42);
   fieldLineFit1010->GetYaxis()->SetLabelFont(42);
   fieldLineFit1010->GetYaxis()->SetTitleFont(42);
   fieldLineFit1010->SetParameter(0,0.03038231);
   fieldLineFit1010->SetParError(0,0.005166239);
   fieldLineFit1010->SetParLimits(0,0,0);
   fieldLineFit1010->SetParameter(1,-0.002798594);
   fieldLineFit1010->SetParError(1,0.0002310412);
   fieldLineFit1010->SetParLimits(1,0,0);
   fieldLineFit1010->SetParent(gre);
   gre->GetListOfFunctions()->Add(fieldLineFit1010);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText(" 3.75");
   pt_LaTex = pt->AddText("#minus0.0028#pm0.000231");
   pt_LaTex = pt->AddText("0.0304#pm0.00517");
   pt_LaTex = pt->AddText(" 10.9#pm 1.85");
   pt->Draw();
   
   pt = new TPaveText(0.3,0.69,0.62,0.88,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   pt_LaTex = pt->AddText("#chi^{2}/ndf");
   pt_LaTex = pt->AddText("Gradient [mm/kV#upointppm]");
   pt_LaTex = pt->AddText("Y-intercept [mm/kV]");
   pt_LaTex = pt->AddText("Residual B_{r} [ppm]");
   pt->Draw();
   TLine *line = new TLine(-36,0,10.85628,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(10.85628,-0.09766088,10.85628,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *fieldLineFit1011 = new TF1("fieldLineFit","pol 1",-36,36, TF1::EAddToList::kNo);
   fieldLineFit1011->SetFillColor(19);
   fieldLineFit1011->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fieldLineFit1011->SetLineColor(ci);
   fieldLineFit1011->SetLineWidth(2);
   fieldLineFit1011->SetChisquare(7.497524);
   fieldLineFit1011->SetNDF(2);
   fieldLineFit1011->GetXaxis()->SetLabelFont(42);
   fieldLineFit1011->GetXaxis()->SetTitleOffset(1);
   fieldLineFit1011->GetXaxis()->SetTitleFont(42);
   fieldLineFit1011->GetYaxis()->SetLabelFont(42);
   fieldLineFit1011->GetYaxis()->SetTitleFont(42);
   fieldLineFit1011->SetParameter(0,0.03038231);
   fieldLineFit1011->SetParError(0,0.005166239);
   fieldLineFit1011->SetParLimits(0,0,0);
   fieldLineFit1011->SetParameter(1,-0.002798594);
   fieldLineFit1011->SetParError(1,0.0002310412);
   fieldLineFit1011->SetParLimits(1,0,0);
   fieldLineFit1011->Draw("same");
   
   pt = new TPaveText(0.3851005,0.94,0.6148995,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   pt_LaTex = pt->AddText("Sub-runs 25");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
