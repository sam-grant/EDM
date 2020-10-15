void FieldFit_NSUBRUN_25_NEXP_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct 15 00:39:36 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-0.3113229,75,0.2630352);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1023[11] = {
   -50,
   -40,
   -30,
   -20,
   -10,
   0,
   10,
   20,
   30,
   40,
   50};
   Double_t Graph0_fy1023[11] = {
   0.1569764,
   0.1218378,
   0.07233374,
   0.04710718,
   0.007779537,
   -0.0374978,
   -0.06526678,
   -0.1050094,
   -0.1602292,
   -0.1761477,
   -0.2052641};
   Double_t Graph0_fex1023[11] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1023[11] = {
   0.01033248,
   0.01033248,
   0.01033248,
   0.01033248,
   0.01033248,
   0.01033248,
   0.01033248,
   0.01033248,
   0.01033248,
   0.01033248,
   0.01033248};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1023,Graph0_fy1023,Graph0_fex1023,Graph0_fey1023);
   gre->SetName("Graph0");
   gre->SetTitle("Sub-runs 25");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01023 = new TH1F("Graph_Graph01023","Sub-runs 25",100,-60,60);
   Graph_Graph01023->SetMinimum(-0.2538871);
   Graph_Graph01023->SetMaximum(0.2055994);
   Graph_Graph01023->SetDirectory(0);
   Graph_Graph01023->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01023->SetLineColor(ci);
   Graph_Graph01023->GetXaxis()->SetTitle("Applied B_{r} [ppm]");
   Graph_Graph01023->GetXaxis()->CenterTitle(true);
   Graph_Graph01023->GetXaxis()->SetLabelFont(42);
   Graph_Graph01023->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01023->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01023->GetXaxis()->SetTitleFont(42);
   Graph_Graph01023->GetYaxis()->SetTitle("#LTy#GT / QHV [mm/kV]");
   Graph_Graph01023->GetYaxis()->CenterTitle(true);
   Graph_Graph01023->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01023->GetYaxis()->SetLabelFont(42);
   Graph_Graph01023->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01023->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01023->GetYaxis()->SetTitleFont(42);
   Graph_Graph01023->GetZaxis()->SetLabelFont(42);
   Graph_Graph01023->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01023->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01023);
   
   
   TF1 *mainFit1024 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1024->SetFillColor(19);
   mainFit1024->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1024->SetLineColor(ci);
   mainFit1024->SetLineWidth(2);
   mainFit1024->SetChisquare(5.76386);
   mainFit1024->SetNDF(9);
   mainFit1024->GetXaxis()->SetLabelFont(42);
   mainFit1024->GetXaxis()->SetTitleOffset(1);
   mainFit1024->GetXaxis()->SetTitleFont(42);
   mainFit1024->GetYaxis()->SetLabelFont(42);
   mainFit1024->GetYaxis()->SetTitleFont(42);
   mainFit1024->SetParameter(0,-0.03121639);
   mainFit1024->SetParError(0,0.003115359);
   mainFit1024->SetParLimits(0,0,0);
   mainFit1024->SetParameter(1,-0.003707375);
   mainFit1024->SetParError(1,9.851631e-05);
   mainFit1024->SetParLimits(1,0,0);
   mainFit1024->SetParent(gre);
   gre->GetListOfFunctions()->Add(mainFit1024);
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.69,0.68,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText(" 0.64");
   pt_LaTex = pt->AddText("#minus0.00371#pm9.85e-05");
   pt_LaTex = pt->AddText("#minus0.0312#pm0.00312");
   pt_LaTex = pt->AddText("#minus8.42#pm 0.87");
   pt->Draw();
   
   pt = new TPaveText(0.3,0.69,0.62,0.88,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   pt_LaTex = pt->AddText("#chi^{2}/ndf");
   pt_LaTex = pt->AddText("Gradient [mm/kV#upointppm]");
   pt_LaTex = pt->AddText("Y-intercept [mm/kV]");
   pt_LaTex = pt->AddText("Background B_{r} [ppm]");
   pt->Draw();
   TLine *line = new TLine(-60,0,-8.420078,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   line = new TLine(-8.420078,-0.2538871,-8.420078,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   TF1 *mainFit1025 = new TF1("mainFit","[0]+[1]*x",-60,60, TF1::EAddToList::kNo);
   mainFit1025->SetFillColor(19);
   mainFit1025->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   mainFit1025->SetLineColor(ci);
   mainFit1025->SetLineWidth(2);
   mainFit1025->SetChisquare(5.76386);
   mainFit1025->SetNDF(9);
   mainFit1025->GetXaxis()->SetLabelFont(42);
   mainFit1025->GetXaxis()->SetTitleOffset(1);
   mainFit1025->GetXaxis()->SetTitleFont(42);
   mainFit1025->GetYaxis()->SetLabelFont(42);
   mainFit1025->GetYaxis()->SetTitleFont(42);
   mainFit1025->SetParameter(0,-0.03121639);
   mainFit1025->SetParError(0,0.003115359);
   mainFit1025->SetParLimits(0,0,0);
   mainFit1025->SetParameter(1,-0.003707375);
   mainFit1025->SetParError(1,9.851631e-05);
   mainFit1025->SetParLimits(1,0,0);
   mainFit1025->Draw("same");
   
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
