void Y()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 19 15:36:39 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1F *Y__9 = new TH1F("Y__9","-605",100,-100,100);
   Y__9->SetLineWidth(3);
   Y__9->GetXaxis()->SetTitle("Y [mm]");
   Y__9->GetXaxis()->CenterTitle(true);
   Y__9->GetXaxis()->SetLabelFont(42);
   Y__9->GetXaxis()->SetTitleSize(0.04);
   Y__9->GetXaxis()->SetTitleOffset(1.1);
   Y__9->GetXaxis()->SetTitleFont(42);
   Y__9->GetYaxis()->SetTitle("Ghost tracks");
   Y__9->GetYaxis()->CenterTitle(true);
   Y__9->GetYaxis()->SetNdivisions(4000510);
   Y__9->GetYaxis()->SetLabelFont(42);
   Y__9->GetYaxis()->SetTitleSize(0.04);
   Y__9->GetYaxis()->SetTitleOffset(1.1);
   Y__9->GetYaxis()->SetTitleFont(42);
   Y__9->GetZaxis()->SetLabelFont(42);
   Y__9->GetZaxis()->SetTitleOffset(1);
   Y__9->GetZaxis()->SetTitleFont(42);
   Y__9->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
