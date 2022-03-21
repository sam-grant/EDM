void S0S12S18_Y_RMS_vs_p_trackReco_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Mar 21 12:27:33 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.3442,9.390185,3407.403,16.58502);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1212[11] = {
   451.8765,
   653.3173,
   880.3261,
   1123.092,
   1371.063,
   1620.182,
   1866.969,
   2115.425,
   2363.004,
   2613.718,
   2788.119};
   Double_t Graph0_fy1212[11] = {
   13.05823,
   12.99872,
   12.93897,
   12.86077,
   12.81333,
   12.77576,
   12.74458,
   12.69104,
   12.63661,
   12.65355,
   12.64886};
   Double_t Graph0_fex1212[11] = {
   0.06505698,
   0.05491734,
   0.03977274,
   0.03885247,
   0.04148684,
   0.04589044,
   0.05356283,
   0.06665541,
   0.08634886,
   0.1056343,
   0.128527};
   Double_t Graph0_fey1212[11] = {
   0.01819045,
   0.007328944,
   0.005088464,
   0.004909275,
   0.005224862,
   0.005771233,
   0.006729271,
   0.008334118,
   0.01076401,
   0.01356614,
   0.03894409};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1212,Graph0_fy1212,Graph0_fex1212,Graph0_fey1212);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01212 = new TH1F("Graph_Graph01212","S0S12S18_",100,218.1678,3021.891);
   Graph_Graph01212->SetMinimum(10.10967);
   Graph_Graph01212->SetMaximum(15.86554);
   Graph_Graph01212->SetDirectory(0);
   Graph_Graph01212->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01212->SetLineColor(ci);
   Graph_Graph01212->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01212->GetXaxis()->SetRange(0,101);
   Graph_Graph01212->GetXaxis()->CenterTitle(true);
   Graph_Graph01212->GetXaxis()->SetLabelFont(42);
   Graph_Graph01212->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01212->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01212->GetXaxis()->SetTitleFont(42);
   Graph_Graph01212->GetYaxis()->SetTitle("#sigma_{y} [mm] / 250 MeV");
   Graph_Graph01212->GetYaxis()->CenterTitle(true);
   Graph_Graph01212->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01212->GetYaxis()->SetLabelFont(42);
   Graph_Graph01212->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01212->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01212->GetYaxis()->SetTitleFont(42);
   Graph_Graph01212->GetZaxis()->SetLabelFont(42);
   Graph_Graph01212->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01212->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01212);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.3920101,0.9362587,0.6079899,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
